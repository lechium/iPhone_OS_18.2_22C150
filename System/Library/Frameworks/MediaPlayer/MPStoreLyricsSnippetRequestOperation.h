//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPAsyncOperation.h"

@class MPStoreLyricsSnippetURLComponents;

__attribute__((visibility("hidden")))
@interface MPStoreLyricsSnippetRequestOperation : MPAsyncOperation
{
    MPStoreLyricsSnippetURLComponents *_snippetURL;	// 8 = 0x8
    CDUnknownBlockType _responseHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000fe4c2
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(retain, nonatomic) MPStoreLyricsSnippetURLComponents *snippetURL; // @synthesize snippetURL=_snippetURL;
- (void)finishWithError:(id)arg1;	// IMP=0x00000000000fe3ca
- (void)execute;	// IMP=0x00000000000fe267

@end

