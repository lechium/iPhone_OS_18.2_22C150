//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDetailsCell.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface CKDetailsAddMemberCell : CKDetailsCell
{
    UILabel *_addLabel;	// 8 = 0x8
}

+ (double)preferredHeight;	// IMP=0x0060000000158fae
+ (id)reuseIdentifier;	// IMP=0x0060000000158fa1
+ (Class)cellClass;	// IMP=0x0060000000158f2e
- (void).cxx_destruct;	// IMP=0x00000000001593b5
@property(retain, nonatomic) UILabel *addLabel; // @synthesize addLabel=_addLabel;
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00000000001592fb
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000158fb7

@end

