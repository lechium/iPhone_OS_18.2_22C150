//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLMultiArray, NSSet;

@interface CalendarEventClassificationModelInput : NSObject
{
    MLMultiArray *_emb;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000008b82e
@property(retain, nonatomic) MLMultiArray *emb; // @synthesize emb=_emb;
- (id)featureValueForName:(id)arg1;	// IMP=0x001000000008b789
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithEmb:(id)arg1;	// IMP=0x001000000008b6fe

@end
