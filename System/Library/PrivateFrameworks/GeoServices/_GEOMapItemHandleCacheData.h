//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDate;

__attribute__((visibility("hidden")))
@interface _GEOMapItemHandleCacheData : NSObject
{
    NSDate *_timestamp;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000a4df3c
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) unsigned long long cost;
- (id)initWithTimestamp:(id)arg1 data:(id)arg2;	// IMP=0x0000000000a4de69

@end

