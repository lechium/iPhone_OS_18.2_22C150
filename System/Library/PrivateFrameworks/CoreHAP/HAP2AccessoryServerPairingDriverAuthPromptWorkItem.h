//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError;

__attribute__((visibility("hidden")))
@interface HAP2AccessoryServerPairingDriverAuthPromptWorkItem
{
    unsigned long long _permissionType;	// 8 = 0x8
    NSError *_cancelError;	// 16 = 0x10
}

+ (id)promptForType:(unsigned long long)arg1;	// IMP=0x006000000019af4f
- (void).cxx_destruct;	// IMP=0x000000000019ad7d
@property(retain, nonatomic) NSError *cancelError; // @synthesize cancelError=_cancelError;
@property(readonly, nonatomic) unsigned long long permissionType; // @synthesize permissionType=_permissionType;
- (id)description;	// IMP=0x000000000019ac7c
- (void)cancelWithError:(id)arg1;	// IMP=0x000000000019ab80
- (void)runForPairingDriver:(id)arg1;	// IMP=0x000000000019aa0b
- (id)initWithPermissionType:(unsigned long long)arg1;	// IMP=0x000000000019a9ab

@end

