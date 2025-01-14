//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, _SFPBRFAppIconImage, _SFPBRFAvatarImage, _SFPBRFBadgedImage, _SFPBRFDefaultBrowserAppIconImage, _SFPBRFMonogramImage, _SFPBRFSymbolImage, _SFPBRFUrlImage;

@protocol _SFPBRFImageSource <NSObject>
@property(readonly, nonatomic) unsigned long long whichValue;
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) _Bool do_not_show_loading_placeholder;
@property(retain, nonatomic) _SFPBRFDefaultBrowserAppIconImage *default_browser_app_icon;
@property(retain, nonatomic) _SFPBRFBadgedImage *badged_image;
@property(retain, nonatomic) _SFPBRFMonogramImage *monogram;
@property(retain, nonatomic) _SFPBRFAvatarImage *avatar;
@property(retain, nonatomic) _SFPBRFAppIconImage *app_icon;
@property(retain, nonatomic) _SFPBRFSymbolImage *symbol;
@property(retain, nonatomic) _SFPBRFUrlImage *url;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

