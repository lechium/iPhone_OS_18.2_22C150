//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC9ChronoKit16ExtensionManager : NSObject
{
    MISSING_TYPE *requireValidExtensions;	// 8 = 0x8
    MISSING_TYPE *_extensionsPublisher;	// 16 = 0x10
    MISSING_TYPE *_addedPublisher;	// 24 = 0x18
    MISSING_TYPE *_updatedPublisher;	// 32 = 0x20
    MISSING_TYPE *_removedPublisher;	// 40 = 0x28
    MISSING_TYPE *extensionsByIdentifier;	// 48 = 0x30
    MISSING_TYPE *removedPluginUUIDsByIdentifier;	// 56 = 0x38
    MISSING_TYPE *queue;	// 64 = 0x40
    MISSING_TYPE *lookupLock;	// 72 = 0x48
    MISSING_TYPE *nsExtensionDiscovererSubscription;	// 80 = 0x50
    MISSING_TYPE *nsExtensionDiscoverer;	// 88 = 0x58
    MISSING_TYPE *remoteWidgetExtensionSubscription;	// 128 = 0x80
    MISSING_TYPE *remoteWidgetExtensionProvider;	// 136 = 0x88
    MISSING_TYPE *applicationWorkspace;	// 176 = 0xb0
    MISSING_TYPE *extensionFactory;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x000000000009ffa0
- (id)init;	// IMP=0x00000000000a7a20
- (void)pluginsDidUninstall:(id)arg1;	// IMP=0x00000000000a1710
- (void)dealloc;	// IMP=0x000000000009ff10

@end
