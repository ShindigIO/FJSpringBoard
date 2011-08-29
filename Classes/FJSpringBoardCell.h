

#import <Foundation/Foundation.h>
#import "FJSpringBoardUtilities.h"
#import "FJSpringBoardView.h"

@interface FJSpringBoardCell : UIView <UIGestureRecognizerDelegate> {

}
- (id)initWithContentSize:(CGSize)size reuseIdentifier:(NSString*)identifier;

@property(nonatomic, retain) UIView *backgroundView; //default is plain white background, you can set this to whatever you like
@property(nonatomic, retain, readonly) UIView *contentView; //add content here

@property(nonatomic, copy, readonly) NSString *reuseIdentifier;

@property(nonatomic) FJSpringBoardCellMode mode;


@property(nonatomic, retain) UIImageView *selectionModeImageView; //shown in select mode
@property(nonatomic, retain) UIImageView *selectedImageView; //shown when selected in select mode
@property(nonatomic) BOOL glowsOnTap;

@property(nonatomic) BOOL selected;
- (void)setSelected:(BOOL)flag animated:(BOOL)animated;


@property(nonatomic, retain) UIImage *deleteImage; //shown in delete mode, shown as a 30x30 image with origin = self.bounds.origin. place your content accordingly

@property(nonatomic, readonly) BOOL reordering;

- (void)prepareForReuse; //subclasses must call super implementation


@end
