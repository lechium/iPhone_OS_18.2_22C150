//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesShared/ICAttachmentInlineDrawingModel.h>

@interface ICAttachmentInlineDrawingModel (ItemProviderWriting)
+ (id)inlineDrawingTextFindingQueue;	// IMP=0x00500000000dd654
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000018297
- (id)writableTypeIdentifiersForItemProvider;	// IMP=0x0010000000018179
- (void)textFindingResultsMatchingString:(id)arg1 textView:(id)arg2 ignoreCase:(_Bool)arg3 wholeWords:(_Bool)arg4 startsWith:(_Bool)arg5 usePattern:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00100000000dcf20
@end
