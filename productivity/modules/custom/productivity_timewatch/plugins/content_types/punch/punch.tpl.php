<div class="main-box">
  <div class="row">
    <?php if($can_punch): ?>
    <div class="col-lg-6 col-md-6">
      <div class="main-box-body clearfix">
          <form action="<?php print $self_url; ?>" method="post" class="form-inline" role="form">
            <div class="checkbox checkbox-nice">
              <input type="checkbox" name="madan" value='municipality' id="remember-me" />
              <label for="remember-me">Municipality</label>
            </div>
            <input type="hidden" name="dayType" value="regular">
            <button type="submit" class="btn btn-info"><i class="fa fa-gavel" aria-hidden="true"></i> Punch Now</button>
          </form>
        </div>
    </div>
    <div class="col-lg-6 col-md-6">
      <form action="<?php print $self_url; ?>" method="post" class="form-inline" role="form">
        <div class="form-group">
          <?php print  "Mark $day/$month/$year as:";?>
          <select id="selectbasic" name="dayType" class="form-control">
            <option value="sick">Sick</option>
            <option value="vacation">Vacation</option>
            <option value="miluim">Miluim</option>
            <option value="convention">Convention</option>
          </select>
        </div>
        <div class="checkbox checkbox-nice">
            <input type="checkbox" name="halfDay" value='1' id="halfday" />
            <label for="halfday">
              Half Day
            </label>
          </div>
        <button type="submit" class="btn btn-info">Submit</button>
      </form>
    </div>
    <?php endif; ?>
 </div>
  <?php if($timewatch): ?>
  <div class="row">
    <div class="col-lg-12">
      <header class="main-box-header clearfix">
        <h2 class="pull-left">Entries on the <?php print "$day/$month/$year";?></h2>
      </header>
      <div class="main-box-body clearfix">
        <div class="table-responsive">
          <table class="table">
            <thead>
              <tr>
                <th>Entry</th>
                <th>Exit</th>
                <th>Total</th>
                <th class="text-center">Type</th>
              </tr>
            </thead>
            <tbody>
            <?php foreach($timewatch['days'] as $punch): ?>
              <tr>
                <td class="text-center">
                  <?php print $punch['03.entry']; ?>
                </td>
                <td class="text-center">
                  <?php print ($punch['05.total'] != '0:00') ? $punch['04.exit'] : t('Still working...'); ?>
                </td>
                <td class="text-center">
                  <?php print $punch['05.total']; ?>
                </td>
                <td class="text-center">
                  <?php print $punch['06.project']; ?>
                </td>
              </tr>
            <?php endforeach; ?>
            </tbody>
          </table>
        </div>
      </div>
    </div>
  </div>
  <?php endif; ?>
</div>