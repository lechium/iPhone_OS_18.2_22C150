//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLMultiArray, NSSet;

@interface CalendarEventClassificationModelOutput : NSObject
{
    MLMultiArray *_y;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000008b96e
@property(retain, nonatomic) MLMultiArray *y; // @synthesize y=_y;
- (id)featureValueForName:(id)arg1;	// IMP=0x001000000008b8c9
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithY:(id)arg1;	// IMP=0x001000000008b83e

@end

