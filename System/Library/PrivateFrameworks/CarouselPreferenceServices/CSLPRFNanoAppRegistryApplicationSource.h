//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NARApplicationWorkspace;
@protocol CSLPRFNanoAppRegistryApplicationSourceDelegate;

__attribute__((visibility("hidden")))
@interface CSLPRFNanoAppRegistryApplicationSource : NSObject
{
    NARApplicationWorkspace *_workspace;	// 8 = 0x8
    id <CSLPRFNanoAppRegistryApplicationSourceDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000010647
@property(nonatomic) __weak id <CSLPRFNanoAppRegistryApplicationSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_appsDidChange;	// IMP=0x00000000000105d4
- (void)allApplicationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010539
- (void)dealloc;	// IMP=0x00000000000104ec
- (id)init;	// IMP=0x000000000001046c

@end

