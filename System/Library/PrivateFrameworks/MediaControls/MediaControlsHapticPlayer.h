//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHHapticEngine;
@protocol CHHapticPatternPlayer;

__attribute__((visibility("hidden")))
@interface MediaControlsHapticPlayer : NSObject
{
    CHHapticEngine *_engine;	// 8 = 0x8
    id <CHHapticPatternPlayer> _expandedButtonChangedPlayer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000013c45
@property(retain, nonatomic) id <CHHapticPatternPlayer> expandedButtonChangedPlayer; // @synthesize expandedButtonChangedPlayer=_expandedButtonChangedPlayer;
@property(retain, nonatomic) CHHapticEngine *engine; // @synthesize engine=_engine;
- (void)setupExpandedButtonChanged;	// IMP=0x00000000000139b0
- (void)checkError:(id)arg1;	// IMP=0x0000000000013905
- (void)expandedButtonChanged;	// IMP=0x0000000000013856
- (void)dealloc;	// IMP=0x0000000000013818
- (void)tearDown;	// IMP=0x0000000000013794
- (void)prepare;	// IMP=0x00000000000136ab

@end
