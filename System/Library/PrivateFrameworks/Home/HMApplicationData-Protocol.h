//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/NSObject-Protocol.h>

@class HMApplicationData;

@protocol HMApplicationData <NSObject>
@property(readonly, nonatomic) HMApplicationData *applicationData;
- (void)updateApplicationData:(HMApplicationData *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end
