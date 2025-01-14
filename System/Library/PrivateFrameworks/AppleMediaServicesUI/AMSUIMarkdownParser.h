//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol AMSUIMarkdownParserDelegate;

__attribute__((visibility("hidden")))
@interface AMSUIMarkdownParser : NSObject
{
    NSString *_string;	// 8 = 0x8
    id <AMSUIMarkdownParserDelegate> _delegate;	// 16 = 0x10
    struct _xmlParserCtxt *__parserContext;	// 24 = 0x18
}

+ (void)initialize;	// IMP=0x0060000000046c73
- (void).cxx_destruct;	// IMP=0x0000000000047651
@property(nonatomic) struct _xmlParserCtxt *_parserContext; // @synthesize _parserContext=__parserContext;
@property(nonatomic) __weak id <AMSUIMarkdownParserDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *string; // @synthesize string=_string;
- (void)parse;	// IMP=0x0000000000046f1b
- (void)reportParseError:(struct _xmlError *)arg1;	// IMP=0x0000000000046ddd
- (void)reportErrorWithCode:(unsigned long long)arg1 userInfo:(id)arg2;	// IMP=0x0000000000046d58
- (id)init;	// IMP=0x0000000000046d2d
- (id)initWithString:(id)arg1;	// IMP=0x0000000000046cba

@end

