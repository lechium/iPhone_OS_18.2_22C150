//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC28HealthRecordsConceptsSupport31UserDomainConceptChangeProvider : NSObject
{
    MISSING_TYPE *udcStore;	// 8 = 0x8
    MISSING_TYPE *udcChangesSubject;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000001d70
- (id)init;	// IMP=0x0000000000001b60
- (void)userDomainConceptStore:(id)arg1 didDeleteUserDomainConcepts:(id)arg2;	// IMP=0x0000000000001a60
- (void)userDomainConceptStore:(id)arg1 didUpdateUserDomainConcepts:(id)arg2;	// IMP=0x0000000000001a00
- (void)userDomainConceptStore:(id)arg1 didAddUserDomainConcepts:(id)arg2;	// IMP=0x00000000000019e0

@end

