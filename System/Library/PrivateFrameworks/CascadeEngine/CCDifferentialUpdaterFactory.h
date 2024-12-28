//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CCDataResourceWriteAccess, CCDevice;
@protocol CCSetChangeNotifierProtocol;

__attribute__((visibility("hidden")))
@interface CCDifferentialUpdaterFactory : NSObject
{
    CCDataResourceWriteAccess *_writeAccess;	// 8 = 0x8
    id <CCSetChangeNotifierProtocol> _changeNotifier;	// 16 = 0x10
    double _timeout;	// 24 = 0x18
    CCDevice *_localDevice;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000016323
- (id)updaterForSet:(id)arg1 withRequest:(id)arg2;	// IMP=0x00000000000161f3
- (id)initWithWriteAccess:(id)arg1 changeNotifier:(id)arg2 timeout:(double)arg3;	// IMP=0x000000000001612c

@end
