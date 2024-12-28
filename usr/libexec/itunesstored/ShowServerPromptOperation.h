//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface ShowServerPromptOperation : ISOperation
{
    NSString *_promptIdentifier;	// 96 = 0x60
}

- (_Bool)_promptNeedsDisplay;	// IMP=0x00200000000ab803
- (id)_newStoreURLOperation:(id *)arg1;	// IMP=0x00100000000ab5f0
- (_Bool)_automaticDownloadsPromptNeedsDisplay;	// IMP=0x00100000000ab5a5
- (void)run;	// IMP=0x00100000000ab071
@property(readonly) NSString *promptIdentifier;
- (void)dealloc;	// IMP=0x00100000000ab011
- (id)initWithPromptIdentifier:(id)arg1;	// IMP=0x00100000000aafb3
- (id)init;	// IMP=0x00100000000aaf9f

@end
