//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface MRDNowPlayingPlayerClientPlaybackState : NSObject
{
    unsigned int _playbackState;	// 8 = 0x8
    NSDate *_date;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000004031d
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) unsigned int playbackState; // @synthesize playbackState=_playbackState;
- (id)description;	// IMP=0x00100000000402a5
- (id)initWithPlaybackState:(unsigned int)arg1 date:(id)arg2;	// IMP=0x001000000004020b

@end

