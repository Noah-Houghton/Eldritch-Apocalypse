var gulp = require('gulp'),
nunjucksRender = require('gulp-nunjucks-render'),
data = require('gulp-data'),
nunjucksMD = require('gulp-nunjucks-md');


var templates = ['./app/templates'];

gulp.task('default', function() {
  return gulp
    .src('app/pages/**/*.{html,njk,md}')
    // Adding data to Nunjucks
//     .pipe(data(function() {
//       return require('./app/data.json')
//     }))
    .pipe(
      nunjucksMD({
        path: templates,
        data: './app/data.json'
      })
    )
    // .pipe(nunjucksRender({
    //   path: templates,
    // }))
    .pipe(gulp.dest('app'))
});
