//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetricMeasurement/NSObject-Protocol.h>

@class MXMDisplayDescriptor, NSArray, NSObject;
@protocol MXMDisplayProbePlatformDelegate, OS_dispatch_queue;

@protocol MXMDisplayProbePlatform <NSObject>
+ (NSArray *)_allDescriptors;
@property(nonatomic) __weak id <MXMDisplayProbePlatformDelegate> delegate;
- (void)_stop;
- (void)_start;
- (id)initPrivateWithDescriptor:(MXMDisplayDescriptor *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
@end

