//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface LSMIResultRegistrantTrueDatabaseContext : NSObject
{
    struct LSContext _context;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x000000000016baa4
- (void).cxx_destruct;	// IMP=0x000000000016ba95
- (CDUnknownBlockType)unregisterApplicationWithBundleIdentifier:(id)arg1 type:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000016b72b
- (id)findContainerizedRecordForBundleUnit:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x000000000016b6da
- (unsigned int)findOrRegisterContainerizedNodeReinitializingContext:(id)arg1 installDictionary:(id)arg2 personasWithAttributes:(id)arg3 error:(id *)arg4;	// IMP=0x000000000016b4e6
- (_Bool)fullBundleExistsForIdentifier:(id)arg1 matchingNode:(id)arg2;	// IMP=0x000000000016b3a6
- (id)initWithDatabase:(id)arg1;	// IMP=0x000000000016b327

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

