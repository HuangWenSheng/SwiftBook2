//
//  Created by 关东升 on 2017-1-18.
//  本书网站：http://www.51work6.com
//  智捷课堂在线课堂：http://www.zhijieketang.com/
//  智捷课堂微信公共号：zhijieketang
//  作者微博：@tony_关东升
//  作者微信：tony关东升
//  QQ：569418560 邮箱：eorient@sina.com
//  QQ交流群：162030268
//


let testscore = 76

var grade: Character

if testscore >= 90 {
    grade = "A"
} else if testscore >= 80 {
    grade = "B"
} else if testscore >= 70 {
    grade = "C"
} else if testscore >= 60 {
    grade = "D"
} else {
    grade = "F"
}

print("Grade = \(grade)")

