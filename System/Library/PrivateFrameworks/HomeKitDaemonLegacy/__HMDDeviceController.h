//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDAccountRegistry;

__attribute__((visibility("hidden")))
@interface __HMDDeviceController
{
    HMDAccountRegistry *_accountRegistry;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000006d6ebc
@property(readonly) HMDAccountRegistry *accountRegistry; // @synthesize accountRegistry=_accountRegistry;
- (void)__handleAddedDevice:(id)arg1;	// IMP=0x00000000006d6bc5
- (void)__handleAddedAccount:(id)arg1;	// IMP=0x00000000006d698c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000006d6672
- (void)updateWithDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000006d60af
- (void)dealloc;	// IMP=0x00000000006d6012
- (id)initWithDevice:(id)arg1 accountRegistry:(id)arg2;	// IMP=0x00000000006d5ea1

@end
