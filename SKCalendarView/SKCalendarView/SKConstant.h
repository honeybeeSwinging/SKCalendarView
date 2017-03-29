//
//  SKConstant.h
//  SKCalendarView
//
//  Created by shevchenko on 17/3/29.
//  Copyright © 2017年 shevchenko. All rights reserved.
//

#ifndef SKConstant_h
#define SKConstant_h

#import "SKDateSecurity.h"
#import <Masonry/Masonry.h>
#import <SKArchCutter/SKArchCutter.h>

#define isEmpty(x)  [SKDateSecurity isNilOrEmpty:x]
#define getNoneNil(object)  [SKDateSecurity getNoneNilString:object]

#endif /* SKConstant_h */
