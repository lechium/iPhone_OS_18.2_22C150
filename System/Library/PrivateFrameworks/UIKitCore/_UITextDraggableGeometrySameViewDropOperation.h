//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSAttributedString, NSString, UITextRange;

__attribute__((visibility("hidden")))
@interface _UITextDraggableGeometrySameViewDropOperation : NSObject
{
    NSArray *_sourceRanges;	// 8 = 0x8
    UITextRange *_targetRange;	// 16 = 0x10
    NSAttributedString *_text;	// 24 = 0x18
    unsigned long long _operation;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000016b99cd
@property(nonatomic) unsigned long long operation; // @synthesize operation=_operation;
@property(retain, nonatomic) NSAttributedString *text; // @synthesize text=_text;
@property(retain, nonatomic) UITextRange *targetRange; // @synthesize targetRange=_targetRange;
@property(retain, nonatomic) NSArray *sourceRanges; // @synthesize sourceRanges=_sourceRanges;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
