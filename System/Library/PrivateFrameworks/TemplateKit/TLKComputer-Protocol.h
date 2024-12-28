//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TemplateKit/NSObject-Protocol.h>

@class NSArray, NSObject;

@protocol TLKComputer <NSObject>
- (void)computeObjectForKey:(NSObject *)arg1 completionHandler:(void (^)(NSObject *))arg2;

@optional
- (void)computeObjectsForKeys:(NSArray *)arg1 completionHandler:(void (^)(NSArray *))arg2;
@end
