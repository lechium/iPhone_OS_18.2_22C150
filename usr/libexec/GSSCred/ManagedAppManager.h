//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface ManagedAppManager : NSObject
{
    NSArray *managedApps;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000153f0
@property(retain, nonatomic) NSArray *managedApps; // @synthesize managedApps;
- (void)listenForChanges;	// IMP=0x0010000000015270
- (void)updateManagedApps:(id)arg1;	// IMP=0x0010000000014c60
- (_Bool)isManagedApp:(id)arg1 auditToken:(CDStruct_6ad76789)arg2;	// IMP=0x0010000000014a70
- (void)dealloc;	// IMP=0x00100000000149f0
- (id)init;	// IMP=0x0010000000014960

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
