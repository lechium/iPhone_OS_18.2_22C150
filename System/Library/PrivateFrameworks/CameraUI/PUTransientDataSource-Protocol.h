//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CameraUI/NSObject-Protocol.h>

@class NSArray, NSDictionary;
@protocol PUTransientDataSourceChangeObserver;

@protocol PUTransientDataSource <NSObject>
- (void)unregisterChangeObserver:(id <PUTransientDataSourceChangeObserver>)arg1;
- (void)registerChangeObserver:(id <PUTransientDataSourceChangeObserver>)arg1;
- (NSDictionary *)transientBurstMapping;
- (NSDictionary *)transientAssetMapping;
- (NSArray *)uuids;
@end

