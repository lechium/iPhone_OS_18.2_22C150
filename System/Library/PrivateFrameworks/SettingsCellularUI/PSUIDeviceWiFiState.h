//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PSUIDeviceWiFiState : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x0080000000006625
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000006a75
- (id)getLogger;	// IMP=0x0000000000006a55
- (_Bool)isConnectedOverWiFi;	// IMP=0x000000000000684e
- (void)dealloc;	// IMP=0x00000000000067d2
- (id)init;	// IMP=0x0000000000006715
- (id)initPrivate;	// IMP=0x000000000000668a

@end
