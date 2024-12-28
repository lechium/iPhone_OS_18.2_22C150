//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSUUID;

__attribute__((visibility("hidden")))
@interface HMDWatchSync : HMFObject
{
    _Bool _inProgress;	// 8 = 0x8
    _Bool _isRetry;	// 9 = 0x9
    unsigned long long _syncOption;	// 16 = 0x10
    NSUUID *_identifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000023b219
@property(readonly) _Bool isRetry; // @synthesize isRetry=_isRetry;
@property _Bool inProgress; // @synthesize inProgress=_inProgress;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property unsigned long long syncOption; // @synthesize syncOption=_syncOption;
- (id)attributeDescriptions;	// IMP=0x000000000023afd4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000023af2d
- (unsigned long long)hash;	// IMP=0x000000000023aea7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000023ad44
- (id)initWithIdentifier:(id)arg1 syncOption:(unsigned long long)arg2;	// IMP=0x000000000023ad29
- (id)initWithSyncOption:(unsigned long long)arg1;	// IMP=0x000000000023acc4
- (id)initWithIdentifier:(id)arg1 syncOption:(unsigned long long)arg2 inProgress:(_Bool)arg3 isRetry:(_Bool)arg4;	// IMP=0x000000000023ac21

@end
