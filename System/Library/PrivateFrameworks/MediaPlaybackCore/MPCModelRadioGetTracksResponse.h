//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPSectionedCollection;

__attribute__((visibility("hidden")))
@interface MPCModelRadioGetTracksResponse : NSObject
{
    long long _tracklistAction;	// 8 = 0x8
    MPSectionedCollection *_tracks;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002c1821
@property(readonly, copy, nonatomic) MPSectionedCollection *tracks; // @synthesize tracks=_tracks;
@property(readonly, nonatomic) long long tracklistAction; // @synthesize tracklistAction=_tracklistAction;
- (id)description;	// IMP=0x00000000002c1723
- (id)initWithTracks:(id)arg1 tracklistAction:(long long)arg2;	// IMP=0x00000000002c16a5

@end
