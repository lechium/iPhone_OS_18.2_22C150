//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_LSLazyPropertyList.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _LSPlugInPropertyList : _LSLazyPropertyList
{
    _LSLazyPropertyList *_infoPlist;	// 8 = 0x8
    _LSLazyPropertyList *_sdkPlist;	// 16 = 0x10
    NSDictionary *_mergedPlist;	// 24 = 0x18
    struct os_unfair_lock_s _mergeLock;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000012c86f
- (void).cxx_destruct;	// IMP=0x000000000012ca1f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000012c916
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000012c877
- (_Bool)_getValue:(id *)arg1 forPropertyListKey:(id)arg2;	// IMP=0x000000000012c7cb
- (_Bool)_getPropertyList:(id *)arg1;	// IMP=0x000000000012c6b2
- (id)initWithInfoPlist:(id)arg1 SDKPlist:(id)arg2;	// IMP=0x000000000012c612

@end

