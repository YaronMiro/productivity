<div class="quick-links main-box clearfix">
  <header class="main-box-header clearfix">
    <h2 class="pull-left">Quick links</h2>
  </header>
  <div class="main-box-body clearfix">
    <?php foreach($urls as $key => $url): ?>
      <span class="label label-large <?php print $active == $key ? 'label-danger' : 'label-default '; ?>"><?php print $url; ?></span>
    <?php endforeach; ?>
  </div>
</div>

<style>
  .quick-links a {
    color: white;
    line-height: 3;
  }
</style>