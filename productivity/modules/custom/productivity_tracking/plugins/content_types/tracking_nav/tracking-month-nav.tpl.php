<div id="month-nav">
  <div style="font-size:26px; text-align: center;">
    <a href="<?php print $urls['previous_month']; ?>" class=""><i class="fa fa-caret-left"></i></a>
    <span><?php print $month; ?> - <?php print $year; ?></span>
    <a href="<?php print $urls['next_month']; ?>" class=""><i class="fa fa-caret-right"></i></a>
  </div>

  <div class="row clearfix">

    <div class="col-md-12 column">
      <table class="table table-striped table-hover track-item-table table-condensed">
        <thead>
        <tr>
          <th>#</th>
          <?php foreach($days_link as $link): ?>
            <th><?php print $link; ?></th>
          <?php endforeach; ?>
        </tr>
        </thead>
        <tbody>
          <?php foreach($tracks as $tracking): ?>
            <tr class="track-item">
              <?php foreach($tracking['data']['days'] as $key => $tracks): ?>
                <td>
                  <ul class="list-unstyled">
                    <?php foreach($tracks as $track): ?>
                      <?php if ($track['type'] == 'name' && !$expanded): ?>
                        <!--     User name   -->
                        <li class="<?php print $track['type']; ?>">
                          <a href="<?php print $track['pr_href']; ?>" target="_blank"><?php print $track['length']; ?></a>
                        </li>
                      <?php endif; ?>
                      <?php  if (isset($track['class']) && $track['class'] == 'tracking'): ?>
                        <!--     tracking data            -->
                        <li<?php print ' mlid="' . $track['mlid'] . '"'; if (!$expanded && $track['expandable'] ) { print ' style="display:none"';} ?>>
                          <a href="<?php print $track['pr_href']; ?>" data-toggle="tooltip" title="<?php print check_plain($track['title']); ?>" class="<?php print $track['class']; ?>" target="_blank"><?php print $track['length']; ?></a>
                        </li>
                      <?php endif; ?>
                      <?php if ($track['type'] == 'global'):  ?>
                        <!--      Non tracking data            -->
                        <li data-toggle="tooltip" title="<?php print check_plain($track['title']); ?>" class="<?php print $track['class']; ?>">
                          <?php print $track['length']; ?>
                        </li>
                      <?php endif; ?>
                    <?php endforeach; ?>
                    <li>
                      <strong><?php if (isset($tracking['data']['sum']['days'][$key])) { print $tracking['data']['sum']['days'][$key];} ?></strong>
                    </li>
                  </ul>
                </td>
              <?php endforeach; ?>
            </tr>
          <?php endforeach; ?>
        </tbody>
      </table>
    </div>
  </div>
</div>


<style>
  .table tbody > tr.track-item > td {
    vertical-align: bottom;
  }
  table tbody > tr.track-item .weekend {
    color: blueviolet;
  }
  table tbody > tr.track-item .vacation {
    color: #002F31;
  }
  table tbody > tr.track-item .holiday {
    color: brown;
  }
  table tbody > tr.track-item .empty {
    color: red;
  }
  table tbody > tr.track-item .Sick {
    color: #761c19;
  }
  table tbody > tr.track-item .Miluim {
    color: darkgreen;
  }
  table tbody > tr.track-item .Convention {
      color: seagreen;
  }
</style>