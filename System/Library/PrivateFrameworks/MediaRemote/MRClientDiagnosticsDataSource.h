//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MRClientDiagnosticsDataSource : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_map;	// 16 = 0x10
}

+ (id)sharedDataSource;	// IMP=0x00400000002d004b
- (void).cxx_destruct;	// IMP=0x00000000002d0824
@property(readonly, nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) NSMutableDictionary *map; // @synthesize map=_map;
- (void)remove:(id)arg1;	// IMP=0x00000000002d069f
- (void)add:(id)arg1;	// IMP=0x00000000002d0528
@property(readonly, nonatomic) NSString *diagnostic;
- (id)init;	// IMP=0x00000000002d00a0

@end
