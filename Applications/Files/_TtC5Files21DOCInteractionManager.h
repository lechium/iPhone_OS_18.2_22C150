//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FPItem, MISSING_TYPE;

@interface _TtC5Files21DOCInteractionManager : NSObject
{
    MISSING_TYPE *lastOpenedItem;	// 8 = 0x8
    MISSING_TYPE *lastSelectedItem;	// 16 = 0x10
}

+ (void)setSharedManagerWith:(id)arg1 to:(id)arg2;	// IMP=0x0020000000078720
+ (void)clearSharedControllerFor:(id)arg1;	// IMP=0x0010000000078670
+ (id)sharedManagerFor:(id)arg1;	// IMP=0x0010000000078630
- (void).cxx_destruct;	// IMP=0x00400000000792f0
- (id)init;	// IMP=0x0010000000079270
@property(nonatomic, retain) FPItem *lastSelectedItem; // @synthesize lastSelectedItem;
@property(nonatomic, retain) FPItem *lastOpenedItem; // @synthesize lastOpenedItem;

@end

