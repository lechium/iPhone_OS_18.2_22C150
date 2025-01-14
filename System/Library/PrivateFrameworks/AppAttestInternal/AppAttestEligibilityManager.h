//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface AppAttestEligibilityManager : NSObject
{
    NSArray *_allowlistedDaemons;	// 8 = 0x8
    NSArray *_allowlistedExtensions;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000a28d
@property(retain, nonatomic) NSArray *allowlistedExtensions; // @synthesize allowlistedExtensions=_allowlistedExtensions;
@property(retain, nonatomic) NSArray *allowlistedDaemons; // @synthesize allowlistedDaemons=_allowlistedDaemons;
- (id)fetchBundleRecordFor:(CDStruct_6ad76789)arg1;	// IMP=0x000000000000a083
- (_Bool)isEligibleDaemonFor:(CDStruct_6ad76789)arg1;	// IMP=0x0000000000009c76
- (_Bool)isEligibleApplicationExtensionFor:(CDStruct_6ad76789)arg1;	// IMP=0x0000000000009821
- (_Bool)isEligibleApplicationFor:(CDStruct_6ad76789)arg1;	// IMP=0x0000000000009819

@end

