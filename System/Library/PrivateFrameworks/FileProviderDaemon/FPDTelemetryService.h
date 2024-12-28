//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FPDExtensionManager;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPDTelemetryService : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    FPDExtensionManager *_extensionManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000961e
@property(retain, nonatomic) FPDExtensionManager *extensionManager; // @synthesize extensionManager=_extensionManager;
- (void)start;	// IMP=0x0000000000008b5c
- (void)_replaceFPCKTelemetryValuesInTelemetryReport:(id)arg1;	// IMP=0x0000000000008968
- (id)init;	// IMP=0x00000000000088e6

@end
