//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNContact;

__attribute__((visibility("hidden")))
@interface CNContactListSetMyCardAction
{
    CNContact *_originalMeContact;	// 8 = 0x8
}

+ (id)log;	// IMP=0x006000000027ed9c
- (void).cxx_destruct;	// IMP=0x000000000027f633
@property(retain, nonatomic) CNContact *originalMeContact; // @synthesize originalMeContact=_originalMeContact;
- (void)performUndoAction;	// IMP=0x000000000027f58f
- (void)updateMeContact:(id)arg1;	// IMP=0x000000000027f43a
- (void)fetchOriginalMeContact;	// IMP=0x000000000027f2d6
- (void)performAction;	// IMP=0x000000000027ef12
- (id)updatedMeContact;	// IMP=0x000000000027eec2
- (id)initWithContact:(id)arg1 configuration:(id)arg2;	// IMP=0x000000000027edf8

@end

