//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoordinationCore/COMeshAddOn.h>

@protocol HMDCoordinationAddOnImplDelegate;

__attribute__((visibility("hidden")))
@interface HMDCoordinationAddOnImpl : COMeshAddOn
{
    id <HMDCoordinationAddOnImplDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000082ef0f
@property(nonatomic) __weak id <HMDCoordinationAddOnImplDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didChangeNodesForMeshController:(id)arg1;	// IMP=0x000000000082ee86
- (void)meshController:(id)arg1 didTransitionToState:(unsigned long long)arg2;	// IMP=0x000000000082ee0b

@end

