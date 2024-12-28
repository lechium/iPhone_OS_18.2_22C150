//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOObserverHashTable;
@protocol OS_dispatch_queue;

@interface MapsRadarController : NSObject
{
    int _diagnosticExtensionDarwinToken;	// 8 = 0x8
    int _carplayDarwinToken;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_isolationQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_diagnosticExtensionDarwinQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_carplayDarwinQueue;	// 32 = 0x20
    GEOObserverHashTable *_observers;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x00400000002c4dbc
- (void).cxx_destruct;	// IMP=0x00200000002c8777
@property(retain, nonatomic) GEOObserverHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) int carplayDarwinToken; // @synthesize carplayDarwinToken=_carplayDarwinToken;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *carplayDarwinQueue; // @synthesize carplayDarwinQueue=_carplayDarwinQueue;
@property(nonatomic) int diagnosticExtensionDarwinToken; // @synthesize diagnosticExtensionDarwinToken=_diagnosticExtensionDarwinToken;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *diagnosticExtensionDarwinQueue; // @synthesize diagnosticExtensionDarwinQueue=_diagnosticExtensionDarwinQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue; // @synthesize isolationQueue=_isolationQueue;
- (void)_collectAttachmentsWithRadarDraft:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002c7254
- (void)launchTTRWithRadar:(id)arg1 promptTitle:(id)arg2 fromViewController:(id)arg3;	// IMP=0x00100000002c63dd
- (void)launchTTRWithRadar:(id)arg1;	// IMP=0x00100000002c63c6
- (void)launchTTR;	// IMP=0x00100000002c63b2
- (void)removeAttachmentProvider:(id)arg1;	// IMP=0x00100000002c62e1
- (void)addAttachmentProvider:(id)arg1;	// IMP=0x00100000002c6209
- (void)dealloc;	// IMP=0x00100000002c613d
- (id)init;	// IMP=0x00100000002c4e41

@end
