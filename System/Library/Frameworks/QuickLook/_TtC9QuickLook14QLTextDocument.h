//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIDocument.h>

@class MISSING_TYPE, NSAttributedString, NSString;

@interface _TtC9QuickLook14QLTextDocument : UIDocument
{
    MISSING_TYPE *content;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000c0010
- (id)initWithFileURL:(id)arg1;	// IMP=0x00000000000bff30
- (_Bool)loadFromContents:(id)arg1 ofType:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000bfd50
- (id)contentsForType:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000bf920
- (void)saveWithTextContent:(id)arg1;	// IMP=0x00000000000bef10
@property(nonatomic, readonly) NSAttributedString *attributedTextContent;
@property(nonatomic, readonly) NSString *textContent;
@property(nonatomic, readonly) _Bool hasRichContent;

@end

