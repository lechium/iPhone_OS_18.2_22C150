//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (CoreDAVExtensions)
+ (id)CDVPreconditionHeaderValueWithCTag:(id)arg1;	// IMP=0x005000000003b77e
+ (id)CDVPreconditionHeaderValueWithCTag:(id)arg1 pathTag:(id)arg2;	// IMP=0x005000000003b6ca
+ (id)CDVStringWithNumberOfSpaces:(unsigned long long)arg1;	// IMP=0x005000000003a8a0
+ (id)CDVStringWithNameSpace:(id)arg1 andName:(id)arg2;	// IMP=0x005000000003a5a5
- (id)CDVStringByXMLUnquoting;	// IMP=0x001000000003ae19
- (id)CDVStringByXMLQuoting;	// IMP=0x001000000003ab8f
- (id)CDVStringByAddingPercentEscapesForUserOrPassword;	// IMP=0x001000000003aabd
- (_Bool)CDVIsHTTPStatusLineWithStatusCode:(long long)arg1;	// IMP=0x001000000003a95b
- (id)CDVStringByRemovingTerminatingSlashIfNeeded;	// IMP=0x001000000003a83a
- (id)CDVStringByAppendingSlashIfNeeded;	// IMP=0x001000000003a7e1
- (id)CDVStringByRemovingPercentEscapesForHREF;	// IMP=0x001000000003a7cf
- (id)CDVStringByAddingPercentEscapesForHREFIncludingPercent;	// IMP=0x001000000003a6fd
- (id)CDVStringByAddingPercentEscapesForHREF;	// IMP=0x001000000003a617
- (id)initWithCDVNameSpace:(id)arg1 andName:(id)arg2;	// IMP=0x001000000003a56f
@end
