//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC11PassKitCore30ProvisioningCarKeyStepTransact : NSObject
{
    MISSING_TYPE *context;	// 8 = 0x8
    MISSING_TYPE *credential;	// 16 = 0x10
    MISSING_TYPE *sharedState;	// 48 = 0x30
    MISSING_TYPE *commonCompletion;	// 56 = 0x38
    MISSING_TYPE *sessionHandle;	// 72 = 0x48
    MISSING_TYPE *session;	// 80 = 0x50
    MISSING_TYPE *timeout;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000147230
- (id)init;	// IMP=0x00000000001471d0
- (void)contactlessInterfaceSession:(id)arg1 didEndPersistentCardEmulationWithContext:(id)arg2;	// IMP=0x0000000000148370
- (void)contactlessInterfaceSession:(id)arg1 didFinishTransactionWithContext:(id)arg2;	// IMP=0x00000000001482a0
- (void)contactlessInterfaceSessionDidTerminate:(id)arg1 withErrorCode:(unsigned long long)arg2;	// IMP=0x0000000000148200
- (void)contactlessInterfaceSessionDidTerminate:(id)arg1;	// IMP=0x0000000000148160

@end

