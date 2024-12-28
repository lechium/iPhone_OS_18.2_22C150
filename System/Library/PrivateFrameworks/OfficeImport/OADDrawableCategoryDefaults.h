//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OADShapeProperties, OADTextBodyProperties, OADTextListStyle;

__attribute__((visibility("hidden")))
@interface OADDrawableCategoryDefaults : NSObject
{
    OADShapeProperties *mShapeProperties;	// 8 = 0x8
    OADTextBodyProperties *mTextBodyProperties;	// 16 = 0x10
    OADTextListStyle *mTextListStyle;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000032a53a
- (id)description;	// IMP=0x000000000032a4fc
- (id)textListStyle;	// IMP=0x000000000032a4ee
- (void)setTextListStyle:(id)arg1;	// IMP=0x000000000032a4dd
- (id)textBodyProperties;	// IMP=0x000000000032a4cf
- (void)setTextBodyProperties:(id)arg1;	// IMP=0x000000000032a4be
- (id)shapeProperties;	// IMP=0x000000000032a4b0
- (void)setShapeProperties:(id)arg1;	// IMP=0x000000000032a49f
- (id)initWithDefaults;	// IMP=0x000000000032a3b5
- (id)init;	// IMP=0x000000000032a307

@end
