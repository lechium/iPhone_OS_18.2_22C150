//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNRecentCallCountAndName : NSObject
{
    NSString *_speakableName;	// 8 = 0x8
    unsigned long long _callCount;	// 16 = 0x10
}

+ (id)instanceWithName:(id)arg1 callCount:(unsigned long long)arg2;	// IMP=0x00600000002dce35
- (void).cxx_destruct;	// IMP=0x00000000002dce25
@property(readonly, nonatomic) unsigned long long callCount; // @synthesize callCount=_callCount;
@property(readonly, nonatomic) NSString *speakableName; // @synthesize speakableName=_speakableName;

@end

