var gulp = require('gulp');
var nunjucksRender = require('gulp-nunjucks-render');
var data = require('gulp-data');

gulp.task('nunjucks', function() {
  return gulp.src('app/pages/**/*.+(html|njk)')
    // Adding data to Nunjucks
    .pipe(data(function() {
      return require('./app/data.json')
    }))
    .pipe(nunjucksRender({
      path: ['app/templates']
    }))
    .pipe(gulp.dest('app'))
});
