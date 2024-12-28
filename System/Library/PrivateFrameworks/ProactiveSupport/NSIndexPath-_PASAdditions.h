//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSIndexPath.h>

@class NSString;

@interface NSIndexPath (_PASAdditions)
+ (id)_pas_fromVersionString:(id)arg1 withExceptions:(_Bool)arg2;	// IMP=0x001000000001a0ab
+ (id)_pas_fromVersionStringIfPossible:(id)arg1;	// IMP=0x001000000001a07b
+ (id)_pas_fromVersionString:(id)arg1;	// IMP=0x001000000001a064
- (_Bool)_pas_isGreaterThanVersionString:(id)arg1;	// IMP=0x001000000001a007
- (_Bool)_pas_isGreaterThanOrEqualToVersionString:(id)arg1;	// IMP=0x0010000000019faa
- (_Bool)_pas_isEqualToVersionString:(id)arg1;	// IMP=0x0010000000019f4e
- (_Bool)_pas_isLessThanOrEqualToVersionString:(id)arg1;	// IMP=0x0010000000019ef1
- (_Bool)_pas_isLessThanVersionString:(id)arg1;	// IMP=0x0010000000019e94
- (id)_pas_asVersionString;	// IMP=0x0010000000019a89
- (id)_pas_revivedString;	// IMP=0x0010000000039071

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
