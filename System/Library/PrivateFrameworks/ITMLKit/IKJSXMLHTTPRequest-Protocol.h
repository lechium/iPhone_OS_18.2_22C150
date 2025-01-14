//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSEventListenerObject-Protocol.h>
#import <ITMLKit/JSExport-Protocol.h>

@class IKDOMDocument, JSValue, NSDictionary, NSNumber, NSString;

@protocol IKJSXMLHTTPRequest <IKJSEventListenerObject, JSExport>
@property(nonatomic) _Bool requireSystemTrust;
@property(readonly) NSDictionary *metrics;
@property(readonly) id response;
@property(retain) NSString *responseType;
@property(readonly) IKDOMDocument *responseXML;
@property(readonly) NSString *responseText;
@property(readonly, retain) NSString *statusText;
@property(readonly) unsigned int status;
@property(readonly) unsigned int readyState;
@property unsigned long long timeout;
- (NSString *)getAllResponseHeaders;
- (NSString *)getResponseHeader:(NSString *)arg1;
- (void)abort;
- (void)send:(JSValue *)arg1;
- (void)setRequestHeader:(NSString *)arg1:(NSString *)arg2;
- (void)open:(NSString *)arg1:(NSString *)arg2:(NSNumber *)arg3:(JSValue *)arg4:(JSValue *)arg5;
- (id)init;
@end

