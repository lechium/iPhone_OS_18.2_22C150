//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VGVirtualGarage;
@protocol OS_dispatch_queue;

@interface SearchVirtualGarageManager : NSObject
{
    NSObject<OS_dispatch_queue> *_isolationQueue;	// 8 = 0x8
    VGVirtualGarage *_virtualGarage;	// 16 = 0x10
}

+ (id)sharedSearchVirtualGarageManager;	// IMP=0x00200000009ca721
- (void).cxx_destruct;	// IMP=0x00200000009cacdb
- (void)dealloc;	// IMP=0x00100000009cac66
- (void)virtualGarageDidBecomeAvailable;	// IMP=0x00100000009ca9b8
- (void)virtualGarageDidUpdate:(id)arg1;	// IMP=0x00100000009ca9a6
- (void)setVirtualGarage:(id)arg1;	// IMP=0x00100000009ca900
@property(readonly, nonatomic) VGVirtualGarage *virtualGarage; // @synthesize virtualGarage=_virtualGarage;
- (id)init;	// IMP=0x00100000009ca61b
- (id)updatedTraitsForCurrentGarageState:(id)arg1;	// IMP=0x001000000063d982

@end

