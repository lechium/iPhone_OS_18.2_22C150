//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ICTextFindingResult.h"

@class ICAttachment, ICTextView, MISSING_TYPE, NSString;

@interface _TtC11NotesEditor22ICPDFTextFindingResult : ICTextFindingResult
{
    MISSING_TYPE *result;	// 0 = 0x0
}

+ (void)resultsInAttachment:(ICAttachment *)arg1 matchingString:(NSString *)arg2 textView:(ICTextView *)arg3 ignoreCase:(_Bool)arg4 wholeWords:(_Bool)arg5 startsWith:(_Bool)arg6 usePattern:(_Bool)arg7 completion:(void (^)(NSArray *))arg8;	// IMP=0x00600000001f3090
- (void).cxx_destruct;	// IMP=0x00000000001f3530
- (id)init;	// IMP=0x00000000001f34d0
- (void)scrollToVisibleInTextView:(id)arg1;	// IMP=0x00000000001f2f80
- (id)framesForHighlightInTextView:(id)arg1;	// IMP=0x00000000001f2d90
- (void)selectInTextView:(id)arg1;	// IMP=0x00000000001f2390
- (long long)compare:(id)arg1;	// IMP=0x00000000001f2240

@end

