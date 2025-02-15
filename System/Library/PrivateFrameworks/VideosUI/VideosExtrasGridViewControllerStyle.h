//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, UIColor, VideosExtrasGridCellStyle, VideosExtrasGridHeaderStyle, VideosExtrasGridSectionHeaderStyle;

__attribute__((visibility("hidden")))
@interface VideosExtrasGridViewControllerStyle : NSObject
{
    _Bool _showsScrollFade;	// 8 = 0x8
    _Bool _adjustsContentInsetByBottomNavBar;	// 9 = 0x9
    UIColor *_backgroundColor;	// 16 = 0x10
    NSString *_detailTextStyle;	// 24 = 0x18
    NSDictionary *_detailDefaultFontAttributes;	// 32 = 0x20
    UIColor *_detailTextColor;	// 40 = 0x28
    VideosExtrasGridHeaderStyle *_headerStyle;	// 48 = 0x30
    VideosExtrasGridSectionHeaderStyle *_sectionHeaderStyle;	// 56 = 0x38
    VideosExtrasGridCellStyle *_defaultCellStyle;	// 64 = 0x40
    VideosExtrasGridCellStyle *_imageCellStyle;	// 72 = 0x48
    VideosExtrasGridCellStyle *_videoCellStyle;	// 80 = 0x50
    VideosExtrasGridCellStyle *_productCellStyle;	// 88 = 0x58
    double _defaultSpacing;	// 96 = 0x60
    double _imageSpacing;	// 104 = 0x68
    double _videoSpacing;	// 112 = 0x70
    double _productSpacing;	// 120 = 0x78
    double _cellLineSpacing;	// 128 = 0x80
    struct UIEdgeInsets _collectionViewInsets;	// 136 = 0x88
    struct UIEdgeInsets _detailInsets;	// 168 = 0xa8
    struct UIEdgeInsets _defaultCellSectionInsets;	// 200 = 0xc8
    struct UIEdgeInsets _imageCellSectionInsets;	// 232 = 0xe8
    struct UIEdgeInsets _videoCellSectionInsets;	// 264 = 0x108
    struct UIEdgeInsets _productCellSectionInsets;	// 296 = 0x128
}

- (void).cxx_destruct;	// IMP=0x00000000000465f5
@property(nonatomic) _Bool adjustsContentInsetByBottomNavBar; // @synthesize adjustsContentInsetByBottomNavBar=_adjustsContentInsetByBottomNavBar;
@property(nonatomic) _Bool showsScrollFade; // @synthesize showsScrollFade=_showsScrollFade;
@property(nonatomic) double cellLineSpacing; // @synthesize cellLineSpacing=_cellLineSpacing;
@property(nonatomic) struct UIEdgeInsets productCellSectionInsets; // @synthesize productCellSectionInsets=_productCellSectionInsets;
@property(nonatomic) struct UIEdgeInsets videoCellSectionInsets; // @synthesize videoCellSectionInsets=_videoCellSectionInsets;
@property(nonatomic) struct UIEdgeInsets imageCellSectionInsets; // @synthesize imageCellSectionInsets=_imageCellSectionInsets;
@property(nonatomic) struct UIEdgeInsets defaultCellSectionInsets; // @synthesize defaultCellSectionInsets=_defaultCellSectionInsets;
@property(nonatomic) double productSpacing; // @synthesize productSpacing=_productSpacing;
@property(nonatomic) double videoSpacing; // @synthesize videoSpacing=_videoSpacing;
@property(nonatomic) double imageSpacing; // @synthesize imageSpacing=_imageSpacing;
@property(nonatomic) double defaultSpacing; // @synthesize defaultSpacing=_defaultSpacing;
@property(retain, nonatomic) VideosExtrasGridCellStyle *productCellStyle; // @synthesize productCellStyle=_productCellStyle;
@property(retain, nonatomic) VideosExtrasGridCellStyle *videoCellStyle; // @synthesize videoCellStyle=_videoCellStyle;
@property(retain, nonatomic) VideosExtrasGridCellStyle *imageCellStyle; // @synthesize imageCellStyle=_imageCellStyle;
@property(retain, nonatomic) VideosExtrasGridCellStyle *defaultCellStyle; // @synthesize defaultCellStyle=_defaultCellStyle;
@property(retain, nonatomic) VideosExtrasGridSectionHeaderStyle *sectionHeaderStyle; // @synthesize sectionHeaderStyle=_sectionHeaderStyle;
@property(retain, nonatomic) VideosExtrasGridHeaderStyle *headerStyle; // @synthesize headerStyle=_headerStyle;
@property(nonatomic) struct UIEdgeInsets detailInsets; // @synthesize detailInsets=_detailInsets;
@property(retain, nonatomic) UIColor *detailTextColor; // @synthesize detailTextColor=_detailTextColor;
@property(retain, nonatomic) NSDictionary *detailDefaultFontAttributes; // @synthesize detailDefaultFontAttributes=_detailDefaultFontAttributes;
@property(retain, nonatomic) NSString *detailTextStyle; // @synthesize detailTextStyle=_detailTextStyle;
@property(nonatomic) struct UIEdgeInsets collectionViewInsets; // @synthesize collectionViewInsets=_collectionViewInsets;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;

@end

