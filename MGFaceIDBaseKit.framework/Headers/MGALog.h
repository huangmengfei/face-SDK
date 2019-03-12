//
//  Log.h
//  AliyunLogObjc
//
//  Created by 陆家靖 on 2016/10/27.
//  Copyright © 2016年 陆家靖. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MGAlog : NSObject
{
    NSMutableDictionary<NSString*,NSObject*> *_mContent;
}

- (void)PutContent:(NSString *)value withKey:(NSString *)key;
- (void)PutTime:(int)time;
- (NSDictionary<NSString*,NSObject*> *)GetContent;
- (NSUInteger)GetContentCount;

@end

