//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface CRFormContentTypeModelOutput : NSObject
{
    MLMultiArray *_score;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001316c6
@property(retain, nonatomic) MLMultiArray *score; // @synthesize score=_score;
- (id)featureValueForName:(id)arg1;	// IMP=0x0000000000131621
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithScore:(id)arg1;	// IMP=0x0000000000131596

@end

