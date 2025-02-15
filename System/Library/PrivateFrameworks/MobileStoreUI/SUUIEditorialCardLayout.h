//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, SUUILockupViewElement;

__attribute__((visibility("hidden")))
@interface SUUIEditorialCardLayout : NSObject
{
    NSMutableArray *_allLockups;	// 8 = 0x8
    SUUILockupViewElement *_primaryLockup;	// 16 = 0x10
    struct CGSize _primaryLockupSize;	// 24 = 0x18
    double _secondaryLockupWidth;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000062272
@property(readonly, nonatomic) double secondaryLockupWidth; // @synthesize secondaryLockupWidth=_secondaryLockupWidth;
@property(readonly, nonatomic) struct CGSize primaryLockupSize; // @synthesize primaryLockupSize=_primaryLockupSize;
@property(readonly, nonatomic) SUUILockupViewElement *primaryLockup; // @synthesize primaryLockup=_primaryLockup;
@property(readonly, nonatomic) NSArray *allLockups; // @synthesize allLockups=_allLockups;
- (id)initWithCard:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0000000000061f28

@end

